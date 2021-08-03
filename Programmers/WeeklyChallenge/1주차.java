/*
 * 1주차 - 부족한 금액 계산하기
 * 
 * 
 */

// // 1번 풀이
// class Solution {
//     public long solution(int price, int money, int count) {
//         long answer = 0;

//         // 필요한 돈 계산
//         long needMoney = 0;
//         for (int i = 1; i <= count; i++) {
//             needMoney += price * i;
//         }

//         // 가지고 있는 돈과 필요한 돈 비교
//         if (money < needMoney) {
//             answer = needMoney - money;
//         }

//         return answer;
//     }
// }

// 2번 풀이
class Solution {
    public long solution(long price, long money, long count) { // long 타입으로 변경
        long answer = 0;

        long needMoney = price * (count * (count + 1)) / 2;

        if (money < needMoney) {
            answer = needMoney - money;
        }

        return answer;
    }
}