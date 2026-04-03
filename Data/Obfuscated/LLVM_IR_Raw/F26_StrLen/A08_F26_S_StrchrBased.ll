@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @RpC(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i8*
  store i8* %0, i8** %2
  %5 = load i8*, i8** %2
  store i8* %5, i8** %3
  br label %6
6:
  %7 = load i8*, i8** %3
  %8 = load i8, i8* %7
  %9 = icmp ne i8 %8, 0
  br i1 %9, label %10, label %19
10:
  %11 = load i8*, i8** %3
  %12 = load i8, i8* %11
  %13 = sext i8 %12 to i32
  %14 = icmp eq i32 %13, 0
  br i1 %14, label %15, label %16
15:
  br label %19
16:
  %17 = load i8*, i8** %3
  %18 = getelementptr inbounds i8, i8* %17, i32 1
  store i8* %18, i8** %3
  br label %6
19:
  %20 = load i8*, i8** %3
  %21 = load i8*, i8** %2
  %22 = ptrtoint i8* %20 to i64
  %23 = ptrtoint i8* %21 to i64
  %24 = sub i64 %22, %23
  %25 = trunc i64 %24 to i32
  ret i32 %25
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
  %13 = call i32 @RpC(i8* %12)
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %13)
  store i32 0, i32* %3
  br label %15
15:
  %16 = load i32, i32* %3
  ret i32 %16
}
declare i32 @printf(i8*, ...)
