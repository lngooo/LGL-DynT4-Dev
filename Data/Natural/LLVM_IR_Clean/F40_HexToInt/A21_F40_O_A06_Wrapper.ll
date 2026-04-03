@.str = constant [3 x i8] c"%x\00"
define dso_local i32 @HexToInt(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32 (i8*, i8*, ...)*
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 (i8*, i8*, ...)* @__isoc99_sscanf, i32 (i8*, i8*, ...)** %4
  %7 = load i32 (i8*, i8*, ...)*, i32 (i8*, i8*, ...)** %4
  %8 = load i8*, i8** %2
  %9 = call i32 (i8*, i8*, ...) %7(i8* %8, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32* %3)
  %10 = load i32, i32* %3
  ret i32 %10
}
declare i32 @__isoc99_sscanf(i8*, i8*, ...)
