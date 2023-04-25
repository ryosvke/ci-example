import unittest
from fibonacci import fibonacci

class FibonacciTestCase(unittest.TestCase):
    def test_equal(self):
        self.assertEqual(fibonacci(1), 0)
        self.assertEqual(fibonacci(2), 1)
        self.assertEqual(fibonacci(3), 1)
        self.assertEqual(fibonacci(4), 2)
        self.assertEqual(fibonacci(5), 3)
        self.assertEqual(fibonacci(6), 5)

    def test_not_equal(self):
        self.assertNotEqual(fibonacci(2), 10)

if __name__ == "__main__":
    unittest.main()
