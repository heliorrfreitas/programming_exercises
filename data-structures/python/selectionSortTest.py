import unittest
from selectionSort import *

class SelectionSortTest(unittest.TestCase):
	
	def test_sort(self):
		array = [8, 4, 2, 6]
		selectionSort = SelectionSort()
		selectionSort.sort(array)
		self.assertEqual(array, [2, 4, 6, 8])
