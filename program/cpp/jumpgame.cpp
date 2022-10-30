public boolean yeahjump(int[] nums) {
        int lin = nums.length;
        boolean[] visited = new boolean[lin];
        visited[0] = true;
        for (int i = 0; i < lin; i++) {
            int steps = nums[i];
            if (visited[i] && steps > 0) {
                for (int j = 1; j <= steps && i + j < lin; j++) {
                    visited[i + j] = true;
                }
            }
        }

        return visited[lin - 1];
    }
