import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        while (sc.hasNextInt()) {
            int numPoints = sc.nextInt();
            List<int[]> points = new ArrayList<>();

            for (int i = 0; i < numPoints; i++) {
                points.add(new int[]{sc.nextInt(), sc.nextInt()});
            }

            Collections.sort(points, (a, b) -> {
                if (a[0] != b[0]) {
                    return a[0] - b[0];
                } else {
                    return a[1] - b[1];
                }
            });

            int[] topCounts = new int[numPoints];
            int[] bottomCounts = new int[numPoints];
            Arrays.fill(topCounts, 1);
            Arrays.fill(bottomCounts, 1);

            for (int i = 1; i < numPoints; i++) {
                int maxTopCount = 1, maxBottomCount = 1;

                for (int j = 0; j < i; j++) {
                    if (points.get(i)[0] > points.get(j)[0] && points.get(i)[1] == points.get(j)[1] + 2) {
                        maxTopCount = Math.max(maxTopCount, bottomCounts[j] + 1);
                    }
                    if (points.get(i)[0] > points.get(j)[0] && points.get(i)[1] == points.get(j)[1] - 2) {
                        maxBottomCount = Math.max(maxBottomCount, topCounts[j] + 1);
                    }
                }

                topCounts[i] = maxTopCount;
                bottomCounts[i] = maxBottomCount;
            }

            int maxPointsInCurve = 1;
            for (int i = 0; i < numPoints; i++) {
                maxPointsInCurve = Math.max(maxPointsInCurve, topCounts[i]);
                maxPointsInCurve = Math.max(maxPointsInCurve, bottomCounts[i]);
            }

            System.out.println(maxPointsInCurve);
        }
    }
}