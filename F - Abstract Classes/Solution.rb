class Book
	attr_accessor :title
	attr_accessor :author
		def initialize(title, author)
		raise 'You cannot instantiate an abstract class.'
	end
		def display
		raise 'You must override this method in your implementing class.'
	end
end

class MyBook < Book
	attr_accessor :price
	def initialize(title, author, price)
		@title = title
		@author = author
		@price = price
	end
	def display()
		print "Title: #{self.title}"
		print "Author: #{self.author}"
		print "Price: #{self.price}" 
	end

end

title = gets
author = gets
price = gets

new_novel = MyBook.new(title, author, price)
new_novel.display
