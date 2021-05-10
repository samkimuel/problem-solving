"""
@file 키패드누르기v2.py
@brief 2020 카카오 인턴십 1번
@desc 구현

두 번째 풀이 
- 키패드 위치를 자료구조로 저장 (리스트, 딕셔너리)
    - 키패드 위치
"""

numbers = [1, 3, 4, 5, 8, 2, 1, 4, 5, 9, 5]
hand = "right"


def solution(numbers, hand):
    answer = ''

    # 키패드 0~9의 위치
    position = [[1, 3],
                [0, 0], [1, 0], [2, 0],
                [0, 1], [1, 1], [2, 1],
                [0, 2], [1, 2], [2, 2]]

    # 처음 손가락 위치
    l = [0, 3]
    r = [2, 3]

    for i in numbers:
        if i in [1, 4, 7]:
            answer += 'L'
            l = position[i]
        elif i in [3, 6, 9]:
            answer += 'R'
            r = position[i]
        else:
            point = position[i]
            dL = abs(l[0] - point[0]) + abs(l[1] - point[1])
            dR = abs(r[0] - point[0]) + abs(r[1] - point[1])

            if dL < dR:
                answer += 'L'
                l = point
            elif dL > dR:
                answer += 'R'
                r = point
            else:
                if hand == 'left':
                    answer += 'L'
                    l = point
                else:
                    answer += 'R'
                    r = point

    return answer


print(solution(numbers, hand))
