class Solution {
    public int canCompleteCircuit(int[] gas, int[] cost) {
        int n = gas.length; // Length of the array
        
        for (int i = 0; i < n; i++) {
            int totalGas = 0;
            int totalStations = 0;

            // Check from station i
            for (int j = i; totalStations < n; j = (j + 1) % n) {
                totalGas += gas[j] - cost[j];
                totalStations++;

                // If at any point the gas is not enough to move to the next station, break
                if (totalGas < 0) {
                    break;
                }
            }

            // If we completed the circuit (visited all stations), return i as the start
            if (totalStations == n && totalGas >= 0) {
                return i;
            }
        }

        return -1; // No valid start station found
    }
}
