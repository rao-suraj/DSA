private fun getQuotes() : Array<Quotes>{
    InputStream istream=context.assets.open("quotes.json")
    val size:Int=istream.available
    val byte = ByteArray(size)
    istream.read(byte)
    istream.close()

    val json=String(byte,Charsets.UTF_8)

    val gson=Gson()
    return gson.fromJson(json,Array<Quotes> ::class.java)
}