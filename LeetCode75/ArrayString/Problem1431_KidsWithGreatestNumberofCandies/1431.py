class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        maximum = max(candies)
        result = [(c + extraCandies) >= maximum for c in candies]
        return result