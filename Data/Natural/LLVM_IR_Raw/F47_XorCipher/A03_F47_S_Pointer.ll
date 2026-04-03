@.str = constant [5 x i8] c"%02x\00"
@.str.1 = constant [2 x i8] c"\0A\00"
define dso_local void @XorCipher(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i8*
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  %8 = load i8*, i8** %3
  store i8* %8, i8** %5
  %10 = load i8*, i8** %4
  store i8* %10, i8** %6
  br label %11
11:
  %12 = load i8*, i8** %5
  %13 = load i8, i8* %12
  %14 = icmp ne i8 %13, 0
  br i1 %14, label %15, label %34
15:
  %16 = load i8*, i8** %6
  %17 = load i8, i8* %16
  %18 = icmp ne i8 %17, 0
  br i1 %18, label %21, label %19
19:
  %20 = load i8*, i8** %4
  store i8* %20, i8** %6
  br label %21
21:
  %22 = load i8*, i8** %6
  %23 = load i8, i8* %22
  %24 = sext i8 %23 to i32
  %25 = load i8*, i8** %5
  %26 = load i8, i8* %25
  %27 = sext i8 %26 to i32
  %28 = xor i32 %27, %24
  %29 = trunc i32 %28 to i8
  store i8 %29, i8* %25
  %30 = load i8*, i8** %5
  %31 = getelementptr inbounds i8, i8* %30, i32 1
  store i8* %31, i8** %5
  %32 = load i8*, i8** %6
  %33 = getelementptr inbounds i8, i8* %32, i32 1
  store i8* %33, i8** %6
  br label %11
34:
  ret void
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i8*
  %7 = alloca i8*
  %8 = alloca i32
  %9 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %10 = load i32, i32* %4
  %11 = icmp slt i32 %10, 3
  br i1 %11, label %12, label %13
12:
  store i32 0, i32* %3
  br label %59
13:
  %15 = load i8**, i8*** %5
  %16 = getelementptr inbounds i8*, i8** %15, i64 1
  %17 = load i8*, i8** %16
  store i8* %17, i8** %6
  %19 = load i8**, i8*** %5
  %20 = getelementptr inbounds i8*, i8** %19, i64 2
  %21 = load i8*, i8** %20
  store i8* %21, i8** %7
  store i32 0, i32* %8
  br label %23
23:
  %24 = load i8*, i8** %6
  %25 = load i32, i32* %8
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i8, i8* %24, i64 %26
  %28 = load i8, i8* %27
  %29 = icmp ne i8 %28, 0
  br i1 %29, label %30, label %33
30:
  %31 = load i32, i32* %8
  %32 = add nsw i32 %31, 1
  store i32 %32, i32* %8
  br label %23
33:
  %34 = load i8*, i8** %6
  %35 = load i8*, i8** %7
  call void @XorCipher(i8* %34, i8* %35)
  store i32 0, i32* %9
  br label %37
37:
  %38 = load i32, i32* %9
  %39 = load i32, i32* %8
  %40 = icmp slt i32 %38, %39
  br i1 %40, label %43, label %41
41:
  br label %54
43:
  %44 = load i8*, i8** %6
  %45 = load i32, i32* %9
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i8, i8* %44, i64 %46
  %48 = load i8, i8* %47
  %49 = zext i8 %48 to i32
  %50 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str, i64 0, i64 0), i32 %49)
  br label %51
51:
  %52 = load i32, i32* %9
  %53 = add nsw i32 %52, 1
  store i32 %53, i32* %9
  br label %37
54:
  %55 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.1, i64 0, i64 0))
  store i32 0, i32* %3
  br label %59
59:
  %60 = load i32, i32* %3
  ret i32 %60
}
declare i32 @printf(i8*, ...)
