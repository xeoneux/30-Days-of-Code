package com.example.retrofitdemo

import java.util.Scanner

object Solution {
    fun main(args: Array<String>) {
        val `in` = Scanner(System.`in`)

        val da = `in`.nextInt()
        val ma = `in`.nextInt()
        val ya = `in`.nextInt()

        val de = `in`.nextInt()
        val me = `in`.nextInt()
        val ye = `in`.nextInt()

        var fine = 0

        if (ya > ye)
            fine = 10000
        else if (ya == ye) {
            if (ma > me)
                fine = (ma - me) * 500
            else if (ma == me && da > de) fine = (da - de) * 15
        }

        println(fine)
    }
}
