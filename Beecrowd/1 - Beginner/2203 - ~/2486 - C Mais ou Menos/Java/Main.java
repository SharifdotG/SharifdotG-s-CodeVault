import java.util.Scanner;

// I get runtime error with this solution

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int food;

        while ((food = scanner.nextInt()) != 0) {
            int total = 0;
            
            for (int i = 0; i < food; i++) {
                int amount = scanner.nextInt();
                String foodName = scanner.next();

                switch (foodName) {
                    case "suco":
                        total += amount * 120;
                        break;
                    case "morango":
                        total += amount * 85;
                        break;
                    case "mamao":
                        total += amount * 85;
                        break;
                    case "goiaba":
                        total += amount * 70;
                        break;
                    case "manga":
                        total += amount * 56;
                        break;
                    case "laranja":
                        total += amount * 50;
                        break;
                    case "brocolis":
                        total += amount * 34;
                        break;
                }
            }

            if (total < 110) {
                System.out.println("Mais " + (110 - total) + " mg");
            } else if (total > 130) {
                System.out.println("Menos " + (total - 130) + " mg");
            } else System.out.println(total + " mg");
        }
        
        scanner.close();
    }
}
