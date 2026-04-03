@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @Gfj3(i8* %0, i8 signext %1) {
  %3 = alloca i8*
  %4 = alloca i8
  %5 = alloca i64
  %6 = alloca i64
  %7 = alloca i64
  store i8* %0, i8** %3
  store i8 %1, i8* %4
  store i64 0, i64* %5
  %10 = load i8*, i8** %3
  %11 = call i64 @strlen(i8* %10)
  store i64 %11, i64* %6
  store i64 0, i64* %7
  br label %13
13:
  %14 = load i64, i64* %7
  %15 = load i64, i64* %6
  %16 = icmp slt i64 %14, %15
  br i1 %16, label %19, label %17
17:
  br label %35
19:
  %20 = load i8*, i8** %3
  %21 = load i64, i64* %7
  %22 = getelementptr inbounds i8, i8* %20, i64 %21
  %23 = load i8, i8* %22
  %24 = sext i8 %23 to i32
  %25 = load i8, i8* %4
  %26 = sext i8 %25 to i32
  %27 = icmp eq i32 %24, %26
  br i1 %27, label %28, label %31
28:
  %29 = load i64, i64* %5
  %30 = add nsw i64 %29, 1
  store i64 %30, i64* %5
  br label %31
31:
  br label %32
32:
  %33 = load i64, i64* %7
  %34 = add nsw i64 %33, 1
  store i64 %34, i64* %7
  br label %13
35:
  %36 = load i64, i64* %5
  %37 = trunc i64 %36 to i32
  ret i32 %37
}
declare i64 @strlen(i8*)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 3
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %3
  br label %20
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = load i8**, i8*** %5
  %14 = getelementptr inbounds i8*, i8** %13, i64 2
  %15 = load i8*, i8** %14
  %16 = getelementptr inbounds i8, i8* %15, i64 0
  %17 = load i8, i8* %16
  %18 = call i32 @Gfj3(i8* %12, i8 signext %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %20
20:
  %21 = load i32, i32* %3
  ret i32 %21
}
declare i32 @printf(i8*, ...)
