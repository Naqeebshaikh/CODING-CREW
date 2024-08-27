class Solution {
    public boolean canPlaceFlowers(int[] flowerbed, int n) {
        int count = 0;
        int length = flowerbed.length;
        for (int i = 0; i < length; i++) {
            if (flowerbed[i] == 0 && 
                (i == 0 || flowerbed[i - 1] == 0) && 
                (i == length - 1 || flowerbed[i + 1] == 0)) {
                
                flowerbed[i] = 1;//planting the flower
                count++;//success in planting 
                i++;
            } 
            if (count >= n) {
                return true;
            }
        }
        
 return false;
    }

}
