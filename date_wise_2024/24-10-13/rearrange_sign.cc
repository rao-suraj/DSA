// 2149. Rearrange Array Elements by Sign

/*
class Solution {
    fun rearrangeArray(nums: IntArray): IntArray {
        buffer.reset()
        for (n in nums) {
            buffer.add(n)
            buffer.drop(nums)
        }
        return nums
    }

    class Buffer() {
        val positives = LinkedList<Int>()
        val negatives = LinkedList<Int>()

        val first = ListNode(positives)
        val second = ListNode(negatives)

        var source: ListNode = first
        var target = 0

        init {
            first.next = second
            second.next = first
        }

        fun reset() {
            source = first
            target = 0
        }

        fun add(n: Int) {
            when {
                n > 0 -> positives.addLast(n)
                else -> negatives.addLast(n)
            }
        }

        fun drop(nums: IntArray) {
            while (source.list.isNotEmpty() == true) {
                nums[target] = source.list.removeFirst()
                target++
                source = source.next ?: first
            }
        }
    }

    class ListNode(val list: LinkedList<Int>) {
        var next: ListNode? = null
    }

    companion object {
        val buffer = Buffer()
    }
}

*/