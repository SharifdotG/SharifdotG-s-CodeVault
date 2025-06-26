// Getting Runtime Error :')

import java.util.Scanner;
import java.util.HashSet;
import java.util.Set;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (scanner.hasNextInt()) {
            int expressionsAndPlayers = scanner.nextInt();
            scanner.nextLine();

            int[][] expressions = new int[expressionsAndPlayers][3];

            for (int i = 0; i < expressionsAndPlayers; i++) {
                String[] expression = scanner.nextLine().split(" ");
                expressions[i][0] = Integer.parseInt(expression[0]);
                expressions[i][1] = Integer.parseInt(expression[1]);
                expressions[i][2] = Integer.parseInt(expression[3]);
            }

            Set<String> disqualifiedPlayers = new HashSet<>();

            for (int i = 0; i < expressionsAndPlayers; i++) {
                String[] input = scanner.nextLine().split(" ");
                String playerName = input[0];
                int chosenExpression = Integer.parseInt(input[1]) - 1;
                char playerAnswer = input[2].charAt(0);

                int firstOperand = expressions[chosenExpression][0];
                int secondOperand = expressions[chosenExpression][1];
                int expectedResult = expressions[chosenExpression][2];

                switch (playerAnswer) {
                    case '+':
                        if (firstOperand + secondOperand != expectedResult)
                            disqualifiedPlayers.add(playerName);
                        break;
                    case '-':
                        if (firstOperand - secondOperand != expectedResult)
                            disqualifiedPlayers.add(playerName);
                        break;
                    case '*':
                        if (firstOperand * secondOperand != expectedResult)
                            disqualifiedPlayers.add(playerName);
                        break;
                    case 'I':
                        if (firstOperand + secondOperand == expectedResult ||
                            firstOperand - secondOperand == expectedResult ||
                            firstOperand * secondOperand == expectedResult)
                            disqualifiedPlayers.add(playerName);
                        break;
                }
            }

            if (disqualifiedPlayers.isEmpty()) {
                System.out.println("You Shall All Pass!");
            } else if (disqualifiedPlayers.size() == expressionsAndPlayers) {
                System.out.println("None Shall Pass!");
            } else {
                System.out.println(String.join(" ", disqualifiedPlayers));
            }
        }
        scanner.close();
    }
}
