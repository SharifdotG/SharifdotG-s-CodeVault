while True:
    try:
        num_points = int(input())
        points = []
        for _ in range(num_points):
            x, y = map(int, input().split())
            points.append((x, y))

        points.sort()

        top_counts = [1] * num_points
        bottom_counts = [1] * num_points

        for i in range(1, num_points):
            max_top_count = 1
            max_bottom_count = 1
            for j in range(i):
                if points[i][0] > points[j][0] and points[i][1] == points[j][1] + 2:
                    max_top_count = max(max_top_count, bottom_counts[j] + 1)
                if points[i][0] > points[j][0] and points[i][1] == points[j][1] - 2:
                    max_bottom_count = max(max_bottom_count, top_counts[j] + 1)
            top_counts[i] = max_top_count
            bottom_counts[i] = max_bottom_count

        max_points_in_curve = 1
        for i in range(num_points):
            max_points_in_curve = max(max_points_in_curve, top_counts[i])
            max_points_in_curve = max(max_points_in_curve, bottom_counts[i])

        print(max_points_in_curve)

    except EOFError:
        break
