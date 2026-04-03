@XorCipher.idx = internal global i32 0
@.str = constant [5 x i8] c"%02x\00"
@.str.1 = constant [2 x i8] c"\0A\00"
define dso_local void @XorCipher(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i32
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  store i32 0, i32* %5
  br label %7
7:
  %8 = load i8*, i8** %4
  %9 = load i32, i32* %5
  %10 = sext i32 %9 to i64
  %11 = getelementptr inbounds i8, i8* %8, i64 %10
  %12 = load i8, i8* %11
  %13 = icmp ne i8 %12, 0
  br i1 %13, label %14, label %17
14:
  %15 = load i32, i32* %5
  %16 = add nsw i32 %15, 1
  store i32 %16, i32* %5
  br label %7
17:
  %18 = load i8*, i8** %3
  %19 = load i8, i8* %18
  %20 = sext i8 %19 to i32
  %21 = icmp ne i32 %20, 0
  br i1 %21, label %22, label %55
22:
  %23 = load i32, i32* %5
  %24 = load i32, i32* %5
  %25 = mul nsw i32 %23, %24
  %26 = add nsw i32 %25, 7
  %27 = icmp sgt i32 %26, 0
  br i1 %27, label %28, label %54
28:
  %29 = load i8*, i8** %4
  %30 = load i32, i32* @XorCipher.idx
  %31 = load i32, i32* %5
  %32 = srem i32 %30, %31
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i8, i8* %29, i64 %33
  %35 = load i8, i8* %34
  %36 = sext i8 %35 to i32
  %37 = load i8*, i8** %3
  %38 = load i8, i8* %37
  %39 = sext i8 %38 to i32
  %40 = xor i32 %39, %36
  %41 = trunc i32 %40 to i8
  store i8 %41, i8* %37
  %42 = load i32, i32* @XorCipher.idx
  %43 = add nsw i32 %42, 1
  store i32 %43, i32* @XorCipher.idx
  %44 = load i8*, i8** %3
  %45 = getelementptr inbounds i8, i8* %44, i64 1
  %46 = load i8*, i8** %4
  call void @XorCipher(i8* %45, i8* %46)
  %47 = load i8*, i8** %3
  %48 = getelementptr inbounds i8, i8* %47, i64 -1
  %49 = load i8, i8* %48
  %50 = sext i8 %49 to i32
  %51 = icmp eq i32 %50, 0
  br i1 %51, label %52, label %53
52:
  store i32 0, i32* @XorCipher.idx
  br label %53
53:
  br label %54
54:
  br label %55
55:
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
