#!/usr/bin/expect -f

set timeout -1
spawn ../4/TicTacToe.c

expect "Pick a space on the board 1-9: \n"
send -- "1\n"

expect "Pick an empty space\n"
send -- "2\n"

expect "Pick an empty space\n"
send -- "3\n"

expect "Pick an empty space\n"
send -- "4\n"

expect "Pick an empty space\n"
send -- "5\n"

expect "Pick an empty space\n"
send -- "6\n"

expect "Pick an empty space\n"
send -- "7\n"

expect "Pick an empty space\n"
send -- "8\n"

expect "Pick an empty space\n"
send -- "9\n"

expect "Pick a space on the board 1-9: \n"
send -- "2\n"

expect "Pick an empty space\n"
send -- "3\n"

expect "Pick an empty space\n"
send -- "4\n"

expect "Pick an empty space\n"
send -- "5\n"

expect "Pick an empty space\n"
send -- "6\n"

expect "Pick an empty space\n"
send -- "7\n"

expect "Pick an empty space\n"
send -- "8\n"

expect "Pick an empty space\n"
send -- "9\n"

expect "Pick a space on the board 1-9: \n"
send -- "3\n"

expect "Pick an empty space\n"
send -- "4\n"

expect "Pick an empty space\n"
send -- "5\n"

expect "Pick an empty space\n"
send -- "6\n"

expect "Pick an empty space\n"
send -- "7\n"

expect "Pick an empty space\n"
send -- "8\n"

expect "Pick an empty space\n"
send -- "9\n"

expect "Pick a space on the board 1-9: \n"
send -- "4\n"

expect "Pick an empty space\n"
send -- "5\n"

expect "Pick an empty space\n"
send -- "6\n"

expect "Pick an empty space\n"
send -- "7\n"

expect "Pick an empty space\n"
send -- "8\n"

expect "Pick an empty space\n"
send -- "9\n"

expect "Pick a space on the board 1-9: \n"
send -- "6\n"

expect "Pick an empty space\n"
send -- "7\n"

expect "Pick an empty space\n"
send -- "8\n"

expect "Pick an empty space\n"
send -- "9\n"

expect "Pick a space on the board 1-9: \n"
send -- "7\n"

expect "Pick an empty space\n"
send -- "8\n"

expect "Pick an empty space\n"
send -- "9\n"

expect "Pick a space on the board 1-9: \n"
send -- "8\n"

expect "Pick an empty space\n"
send -- "9\n"

expect "Pick a space on the board 1-9: \n"
send -- "9\n"

expect eof