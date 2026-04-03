@.str = constant [11 x i8] c"aeiouAEIOU\00"
@.str.1 = constant [3 x i8] c"0\0A\00"
@.str.2 = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @g3(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8*
  %6 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  store i8* getelementptr inbounds ([11 x i8], [11 x i8]* @.str, i64 0, i64 0), i8** %5
  store i32 0, i32* %6
  br label %11
11:
  %12 = load i8*, i8** %2
  %13 = load i32, i32* %6
  %14 = sext i32 %13 to i64
  %15 = getelementptr inbounds i8, i8* %12, i64 %14
  %16 = load i8, i8* %15
  %17 = icmp ne i8 %16, 0
  br i1 %17, label %20, label %18
18:
  br label %45
20:
  %21 = load i8*, i8** %5
  %22 = load i8*, i8** %2
  %23 = load i32, i32* %6
  %24 = sext i32 %23 to i64
  %25 = getelementptr inbounds i8, i8* %22, i64 %24
  %26 = load i8, i8* %25
  %27 = sext i8 %26 to i32
  %28 = call i8* @strchr(i8* %21, i32 %27)
  %29 = icmp ne i8* %28, null
  br i1 %29, label %30, label %41
30:
  %31 = load i32, i32* %6
  %32 = srem i32 %31, 2
  %33 = icmp eq i32 %32, 0
  br i1 %33, label %34, label %37
34:
  %35 = load i32, i32* %3
  %36 = add nsw i32 %35, 1
  store i32 %36, i32* %3
  br label %40
37:
  %38 = load i32, i32* %4
  %39 = add nsw i32 %38, 1
  store i32 %39, i32* %4
  br label %40
40:
  br label %41
41:
  br label %42
42:
  %43 = load i32, i32* %6
  %44 = add nsw i32 %43, 1
  store i32 %44, i32* %6
  br label %11
45:
  %46 = load i32, i32* %3
  %47 = load i32, i32* %4
  %48 = add nsw i32 %46, %47
  ret i32 %48
}
declare i8* @strchr(i8*, i32)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 2
  br i1 %7, label %8, label %10
8:
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.1, i64 0, i64 0))
  store i32 0, i32* %3
  br label %16
10:
  %11 = load i8**, i8*** %5
  %12 = getelementptr inbounds i8*, i8** %11, i64 1
  %13 = load i8*, i8** %12
  %14 = call i32 @g3(i8* %13)
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.2, i64 0, i64 0), i32 %14)
  store i32 0, i32* %3
  br label %16
16:
  %17 = load i32, i32* %3
  ret i32 %17
}
declare i32 @printf(i8*, ...)
