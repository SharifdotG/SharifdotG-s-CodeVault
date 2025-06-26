import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        while (scanner.hasNextLine()) {
            String s = scanner.nextLine();
            StringBuilder result = new StringBuilder();
            boolean upper = true;
            
            for (int i = 0; i < s.length(); i++) {
                char c = s.charAt(i);
                
                if (Character.isLetter(c)) {
                    if (upper) {
                        result.append(Character.toUpperCase(c));
                    } else {
                        result.append(Character.toLowerCase(c));
                    }
                    
                    upper = !upper;
                } else {
                    result.append(c);
                }
            }
            
            System.out.println(result);
        }

        scanner.close();
    }
}
