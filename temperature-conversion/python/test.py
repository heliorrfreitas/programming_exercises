import unittest
from main import convert_c_to_f, convert_f_to_c 

class TempConversionTest(unittest.TestCase):

    def test_conversion_from_c_to_f(self):
        result = convert_c_to_f(0)
        self.assertEqual(result, 32)

    def test_conversion_from_f_to_c(self):
        result = convert_f_to_c(32)
        self.assertEqual(result, 0)


if __name__ == 'main':
    unittest.main()