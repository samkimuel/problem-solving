"""
@file 키패드누르기v1.py
@brief 2020 카카오 인턴십
@desc 구현

첫 번째 풀이 - 키패드 값, 손의 위치로 거리를 계산
"""

numbers = [7, 0, 8, 2, 8, 3, 1, 5, 7, 6, 2]
hand = "left"


def solution(numbers, hand):
    answer = ''
    pL = 10
    pR = 12

    for i in range(len(numbers)):
        if numbers[i] == 1 or numbers[i] == 4 or numbers[i] == 7:
            answer += 'L'
            pL = numbers[i]
        elif numbers[i] == 3 or numbers[i] == 6 or numbers[i] == 9:
            answer += 'R'
            pR = numbers[i]
        else:
            if numbers[i] == 0:
                numbers[i] = 11
            line = numbers[i] % 3
            lLine = pL % 3
            rLine = pR % 3

            # 왼손으로부터 거리
            if lLine != line:
                dL = (abs((pL+1)-numbers[i]) // 3) + 1
            else:
                dL = abs(pL-numbers[i]) // 3

            # 오른손으로부터 거리
            if rLine != line:
                dR = (abs((pR-1)-numbers[i]) // 3) + 1
            else:
                dR = abs(pR-numbers[i]) // 3

            # 거리 같을 때 hand 우선
            if dL == dR:
                if hand == 'right':
                    answer += 'R'
                    pR = numbers[i]
                elif hand == 'left':
                    answer += 'L'
                    pL = numbers[i]
            else:
                if dL < dR:
                    answer += 'L'
                    pL = numbers[i]
                else:
                    answer += 'R'
                    pR = numbers[i]

    return answer


print(solution(numbers, hand))
