# week02-3.py �g LeetCode
# LeetCode 1. Two Sum
# ���@��Ʀr nums �̭�[�����]�ۥ[�A�Otarget
# nums[i] + nums[j] == target ��� i �M j �ϱo�[�_�ӬO target
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        box = {} #���@�ӽc�l�A�̭���[�X�{�L���Ʀr]
        # �ڭ̷Q�n��X target �o�ӥ[�`

        for i, num in enumerate(nums):
            other = target - num # �t�~�@�ӻݭn���� [�i�H��X taget]��(taget-num)
            if other in box: # �b�c�l�̡A���t�@�ӻݭn����
                return[box[other],i]
            else:
                box[num] = i
