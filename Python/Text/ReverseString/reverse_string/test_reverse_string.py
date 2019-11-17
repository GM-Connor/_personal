import unittest
from reverse_string import reverse_string


class ReverseStringTests(unittest.TestCase):
    def test_normal_string(self):
        original_string = "Fire and Ice"
        reversed_string = "ecI dna eriF"
        self.assertEqual(reverse_string(original_string), reversed_string)

    def test_empty_string(self):
        self.assertEqual(reverse_string(""), "")


if __name__ == '__main__':
    unittest.main()
