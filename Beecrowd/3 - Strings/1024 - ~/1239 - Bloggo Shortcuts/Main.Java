import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        StringBuilder result = new StringBuilder();
        
        while (scanner.hasNextLine()) {
            String s = scanner.nextLine();

            boolean italic = false, bold = false;
            result.setLength(0);
            
            for (int i = 0; i < s.length(); i++) {
                char ch = s.charAt(i);
                
                if (ch == '_') {
                    if (!italic) {
                        result.append("<i>");
                    } else {
                        result.append("</i>");
                    }

                    italic = !italic;
                } else if (ch == '*') {
                    if (!bold) {
                        result.append("<b>");
                    } else {
                        result.append("</b>");
                    }

                    bold = !bold;
                } else {
                    result.append(ch);
                }
            }
            
            System.out.println(result);
        }
        
        scanner.close();
    }
}
