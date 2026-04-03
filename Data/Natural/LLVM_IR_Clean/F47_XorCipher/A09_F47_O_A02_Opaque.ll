@XorCipher.idx = internal global i32 0
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
