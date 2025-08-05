package Java_Beginner.Chapter10;
// // ex10_4.java
// // 오류 메시지 직접 만들기

// package Java.Java_Beginner.Chapter10;

// public class ex10_4 {
//     public static void main(String[] args) {
//         int a = 100, b = 0;
//         int result = 0;

//         try {
//             if (b == 0)
//                 throw new Exception("0으로 나누려고요? 안됩니다.");
//             result = a / b;
//         } catch (Exception e) {
//             System.err.println("\n\n !!!예외 발생: " + e.getMessage());
//         }
//     }
// }