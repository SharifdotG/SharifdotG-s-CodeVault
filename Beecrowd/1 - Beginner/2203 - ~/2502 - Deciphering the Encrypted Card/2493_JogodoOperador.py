# Getting Runtime Error :')

while True:
    try:
        expressions_and_players = int(input())
        expressions = []

        for _ in range(expressions_and_players):
            expression = list(map(str, input().split()))
            expressions.append(list(map(int, [expression[0], expression[1], expression[3]])))

        disqualified_players = set()

        for _ in range(expressions_and_players):
            input_data = input().split()
            player_name = input_data[0]
            chosen_expression = int(input_data[1]) - 1
            player_answer = input_data[2]

            first_operand = expressions[chosen_expression][0]
            second_operand = expressions[chosen_expression][1]
            expected_result = expressions[chosen_expression][2]

            if player_answer == '+':
                if first_operand + second_operand != expected_result:
                    disqualified_players.add(player_name)
            elif player_answer == '-':
                if first_operand - second_operand != expected_result:
                    disqualified_players.add(player_name)
            elif player_answer == '*':
                if first_operand * second_operand != expected_result:
                    disqualified_players.add(player_name)
            elif player_answer == 'I':
                if (first_operand + second_operand == expected_result or
                        first_operand - second_operand == expected_result or
                        first_operand * second_operand == expected_result):
                    disqualified_players.add(player_name)

        if not disqualified_players:
            print("You Shall All Pass!")
        elif len(disqualified_players) == expressions_and_players:
            print("None Shall Pass!")
        else:
            print(' '.join(disqualified_players))

    except EOFError:
        break
