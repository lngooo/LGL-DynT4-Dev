@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @x(i8* %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i8*
  %7 = alloca i32
  store i8* %0, i8** %4
  store i8* %1, i8** %5
  %8 = load i8*, i8** %4
  %9 = load i8, i8* %8
  %10 = sext i8 %9 to i32
  %11 = icmp eq i32 %10, 0
  br i1 %11, label %12, label %18
12:
  %13 = load i8*, i8** %5
  %14 = load i8, i8* %13
  %15 = sext i8 %14 to i32
  %16 = icmp eq i32 %15, 0
  br i1 %16, label %17, label %18
17:
  store i32 1, i32* %3
  br label %54
18:
  %19 = load i8*, i8** %4
  %20 = call i64 @strlen(i8* %19)
  %21 = load i8*, i8** %5
  %22 = call i64 @strlen(i8* %21)
  %23 = icmp ne i64 %20, %22
  br i1 %23, label %24, label %25
24:
  store i32 0, i32* %3
  br label %54
25:
  %27 = load i8*, i8** %5
  %28 = load i8*, i8** %4
  %29 = load i8, i8* %28
  %30 = sext i8 %29 to i32
  %31 = call i8* @strchr(i8* %27, i32 %30)
  store i8* %31, i8** %6
  %32 = load i8*, i8** %6
  %33 = icmp ne i8* %32, null
  br i1 %33, label %35, label %34
34:
  store i32 0, i32* %3
  store i32 1, i32* %7
  br label %52
35:
  %36 = load i8*, i8** %5
  %37 = load i8*, i8** %5
  %38 = call i64 @strlen(i8* %37)
  %39 = sub i64 %38, 1
  %40 = getelementptr inbounds i8, i8* %36, i64 %39
  %41 = load i8, i8* %40
  %42 = load i8*, i8** %6
  store i8 %41, i8* %42
  %43 = load i8*, i8** %5
  %44 = load i8*, i8** %5
  %45 = call i64 @strlen(i8* %44)
  %46 = sub i64 %45, 1
  %47 = getelementptr inbounds i8, i8* %43, i64 %46
  store i8 0, i8* %47
  %48 = load i8*, i8** %4
  %49 = getelementptr inbounds i8, i8* %48, i64 1
  %50 = load i8*, i8** %5
  %51 = call i32 @x(i8* %49, i8* %50)
  store i32 %51, i32* %3
  store i32 1, i32* %7
  br label %52
52:
  br label %54
54:
  %55 = load i32, i32* %3
  ret i32 %55
}
declare i64 @strlen(i8*)
declare i8* @strchr(i8*, i32)
define dso_local i32 @k(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca [256 x i8]
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  %7 = getelementptr inbounds [256 x i8], [256 x i8]* %5, i64 0, i64 0
  %8 = load i8*, i8** %4
  %9 = call i8* @strcpy(i8* %7, i8* %8)
  %10 = load i8*, i8** %3
  %11 = getelementptr inbounds [256 x i8], [256 x i8]* %5, i64 0, i64 0
  %12 = call i32 @x(i8* %10, i8* %11)
  ret i32 %12
}
declare i8* @strcpy(i8*, i8*)
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
  br label %18
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = load i8**, i8*** %5
  %14 = getelementptr inbounds i8*, i8** %13, i64 2
  %15 = load i8*, i8** %14
  %16 = call i32 @k(i8* %12, i8* %15)
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %16)
  store i32 0, i32* %3
  br label %18
18:
  %19 = load i32, i32* %3
  ret i32 %19
}
declare i32 @printf(i8*, ...)
