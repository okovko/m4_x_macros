divert(`-1')dnl
define(`join', 
`'`ifelse(`$#', `2', ``$2'',
`'`'`ifelse(`$2', `', `', ``$2'_')'dnl
`'`'`$0(`$1', shift(shift($@)))'dnl
`')dnl
')dnl
define(`_join',
`'`ifelse(`$#$2', `2', `',
`'`'`ifelse(`$2', `', `', ``$1$2'')'dnl
`'`'`$0(`$1', shift(shift($@)))'dnl
`')dnl
')dnl
divert`'dnl
