@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @StrLen(i8* %0) {
  %2 = alloca i32
  %3 = alloca i8*
  store i8* %0, i8** %3
  %4 = load i8*, i8** %3
  %5 = load i8, i8* %4
  %6 = sext i8 %5 to i32
  %7 = icmp eq i32 %6, 0
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %2
  br label %14
9:
  %10 = load i8*, i8** %3
  %11 = getelementptr inbounds i8, i8* %10, i64 1
  %12 = call i32 @StrLen(i8* %11)
  %13 = add nsw i32 1, %12
  store i32 %13, i32* %2
  br label %14
14:
  %15 = load i32, i32* %2
  ret i32 %15
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 2
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %3
  br label %15
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = call i32 @StrLen(i8* %12)
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %13)
  store i32 0, i32* %3
  br label %15
15:
  %16 = load i32, i32* %3
  ret i32 %16
}
declare i32 @printf(i8*, ...)
