@XorCipher.depth = internal global i32 0
@.str = constant [5 x i8] c"%02x\00"
@.str.1 = constant [2 x i8] c"\0A\00"
define dso_local void @XorCipher(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i32
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  %6 = load i8*, i8** %3
  %7 = load i8, i8* %6
  %8 = sext i8 %7 to i32
  %9 = icmp eq i32 %8, 0
  br i1 %9, label %10, label %11
10:
  store i32 0, i32* @XorCipher.depth
  br label %43
11:
  store i32 0, i32* %5
  br label %13
13:
  %14 = load i8*, i8** %4
  %15 = load i32, i32* %5
  %16 = sext i32 %15 to i64
  %17 = getelementptr inbounds i8, i8* %14, i64 %16
  %18 = load i8, i8* %17
  %19 = icmp ne i8 %18, 0
  br i1 %19, label %20, label %23
20:
  %21 = load i32, i32* %5
  %22 = add nsw i32 %21, 1
  store i32 %22, i32* %5
  br label %13
23:
  %24 = load i8*, i8** %4
  %25 = load i32, i32* @XorCipher.depth
  %26 = load i32, i32* %5
  %27 = srem i32 %25, %26
  %28 = sext i32 %27 to i64
  %29 = getelementptr inbounds i8, i8* %24, i64 %28
  %30 = load i8, i8* %29
  %31 = sext i8 %30 to i32
  %32 = load i8*, i8** %3
  %33 = load i8, i8* %32
  %34 = sext i8 %33 to i32
  %35 = xor i32 %34, %31
  %36 = trunc i32 %35 to i8
  store i8 %36, i8* %32
  %37 = load i32, i32* @XorCipher.depth
  %38 = add nsw i32 %37, 1
  store i32 %38, i32* @XorCipher.depth
  %39 = load i8*, i8** %3
  %40 = getelementptr inbounds i8, i8* %39, i64 1
  %41 = load i8*, i8** %4
  call void @XorCipher(i8* %40, i8* %41)
  br label %43
43:
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
