package Java_Beginner.Chapter10;
// // ex10_6.java
// // 표준 입력 사용 예

// package Java.Java_Beginner.Chapter10;

// import java.util.Scanner;

// public class ex10_6 {
//     public static void main(String[] args) {
//         byte a;
//         short b = 0;
//         int c = 0;
//         long d = 0;
//         float e = 0;
//         double f = 0;
//         String str1 = "", str2 = "";

//         Scanner s = new Scanner(System.in);
//         try(s) {
//             System.out.print("byte  : ");       a = s.nextByte(); 
//             System.out.print("short  : ");       b = s.nextShort(); 
//             System.out.print("int  : ");       c = s.nextInt(); 
//             System.out.print("long  : ");       d = s.nextLong(); 
//             System.out.print("float  : ");       e = s.nextFloat(); 
//             System.out.print("double  : ");       f = s.nextDouble(); 
//             System.out.print("str1  : ");       str1 = s.next(); 
//             System.out.print("str2  : ");       str2 = s.nextLine(); 
            
//         } catch (Exception ex) {
//             System.err.println("\n\n !!!예외 발생: " + ex.getMessage());
//         }
//     }
// }