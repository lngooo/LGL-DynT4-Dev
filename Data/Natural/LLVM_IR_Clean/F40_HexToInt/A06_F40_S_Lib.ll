@.str = constant [3 x i8] c"%x\00"
define dso_local i32 @HexToInt(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  %5 = load i8*, i8** %2
  %6 = call i32 (i8*, i8*, ...) @__isoc99_sscanf(i8* %5, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32* %3)
  %7 = load i32, i32* %3
  ret i32 %7
}
declare i32 @__isoc99_sscanf(i8*, i8*, ...)
