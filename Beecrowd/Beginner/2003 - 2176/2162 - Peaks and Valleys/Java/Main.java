import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int landscapeMeasures = scanner.nextInt();
        int count1 = 0, count2 = 0;

        int[] height = new int[landscapeMeasures];
        for (int i = 0; i < landscapeMeasures; i++) {
            height[i] = scanner.nextInt();
        }
        
        if (height[0] < height[1]) {
            for (int i = 0; i < landscapeMeasures - 1; i++) {
                if (i % 2 == 0) {
                    if (height[i] < height[i + 1]) {
                        count1++;
                    }
                } else {
                    if (height[i] > height[i + 1]) {
                        count2++;
                    }
                }
            }
        } else if (height[0] > height[1]) {
            for (int i = 0; i < landscapeMeasures - 1; i++) {
                if (i % 2 == 0) {
                    if (height[i] > height[i + 1]) {
                        count1++;
                    }
                } else {
                    if (height[i] < height[i + 1]) {
                        count2++;
                    }
                }
            }
        }

        if (count1 + count2 + 1 == landscapeMeasures) {
            System.out.println("1");
        } else System.out.println("0");

        scanner.close();
    }
}
