import pygame
import sys

# Initialize Pygame
pygame.init()

# Set up display
screen = pygame.display.set_mode((800, 600))
pygame.display.set_caption("Shooting Game")

# Colors
WHITE = (255, 255, 255)
RED = (255, 0, 0)

# Player
player_size = 50
player_x = 375
player_y = 500
player_speed = 5

# Bullet
bullet_speed = 10
bullet_state = "ready"  # "ready" or "fire"
bullet_x = 0
bullet_y = 500

def player(x, y):
    pygame.draw.rect(screen, RED, (x, y, player_size, player_size))

def fire_bullet(x, y):
    global bullet_state
    bullet_state = "fire"
    screen.blit(bullet_img, (x + player_size // 2, y + 10))

# Game loop
running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
    
    keys = pygame.key.get_pressed()
    if keys[pygame.K_LEFT]:
        player_x -= player_speed
    if keys[pygame.K_RIGHT]:
        player_x += player_speed
    if keys[pygame.K_SPACE] and bullet_state == "ready":
        bullet_x = player_x
        fire_bullet(bullet_x, bullet_y)
    
    # Bullet movement
    if bullet_state == "fire":
        bullet_y -= bullet_speed
        if bullet_y < 0:
            bullet_state = "ready"
            bullet_y = 500
    
    screen.fill(WHITE)
    player(player_x, player_y)
    pygame.display.update()

pygame.quit()
sys.exit()