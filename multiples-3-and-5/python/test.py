import unittest
from main import get_sum_of_multiples_of_below

class SumOfMultiplesOf(unittest.TestCase):

    def test_sum_of_multiples_of_3_and_5_below_10(self):
        result = get_sum_of_multiples_of_below(10)
        self.assertEqual(result, 23)

if __name__ == 'm   ain':
    unittest.main()