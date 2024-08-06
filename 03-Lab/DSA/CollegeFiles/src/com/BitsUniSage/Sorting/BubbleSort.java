package com.BitsUniSage.Sorting;

import java.util.Arrays;
import java.util.Random;

public class BubbleSort {
    public static void main(String[] args) {
        int[] arr = new int[]{4, 8, 9, 0, 1, 45, -4};
//		 randomNumber(arr);
        System.out.println(Arrays.toString(arr));
        bubbleSort(arr);
        System.out.println("Sorted array is: \n" + Arrays.toString(arr));


    }

    public static void randomNumber(int[] arr) {
        Random r = new Random();
        for (int i = 0; i < arr.length; i++) {
            arr[i] = r.nextInt(99);
//			System.out.println("Generated number: " + arr[i]);

        }

    }

    public static void bubbleSort(int[] arr) {
        for (int i = 0; i < arr.length - 1; i++) {
            for (int j = 0; j < arr.length - 1 - i; j++) {
                if (arr[j] > arr[j + 1]) {

                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }else break;
            }
        }
    }
}