

class SelectionSort:

	def swap_elements(self, array, i, j):
		temp = array[i]
		array[i] = array[j]
		array[j] = temp

	def get_index_lowest_element(self, array, start):
		index_lowest = start

		for i in range(start, len(array)):
			if array[i] < array[index_lowest]:
				index_lowest = i

		return index_lowest
	
	def sort(self, array):
		for i in range(len(array)):
			index_lowest = self.get_index_lowest_element(array, i)
			self.swap_elements(array, i, index_lowest)


test = SelectionSort()

array = [8, 2, 4, 6]
print(array)

test.sort(array)

print(array)

