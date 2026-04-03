@XorCipher.cnt = internal global i32 0
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
  br label %18
18:
  %19 = load i8*, i8** %3
  %20 = load i8, i8* %19
  %21 = icmp ne i8 %20, 0
  br i1 %21, label %22, label %40
22:
  %23 = load i8*, i8** %4
  %24 = load i32, i32* @XorCipher.cnt
  %25 = load i32, i32* %5
  %26 = srem i32 %24, %25
  %27 = sext i32 %26 to i64
  %28 = getelementptr inbounds i8, i8* %23, i64 %27
  %29 = load i8, i8* %28
  %30 = sext i8 %29 to i32
  %31 = load i8*, i8** %3
  %32 = load i8, i8* %31
  %33 = sext i8 %32 to i32
  %34 = xor i32 %33, %30
  %35 = trunc i32 %34 to i8
  store i8 %35, i8* %31
  %36 = load i32, i32* @XorCipher.cnt
  %37 = add nsw i32 %36, 1
  store i32 %37, i32* @XorCipher.cnt
  %38 = load i8*, i8** %3
  %39 = getelementptr inbounds i8, i8* %38, i32 1
  store i8* %39, i8** %3
  br label %18
40:
  store i32 0, i32* @XorCipher.cnt
  ret void
}
