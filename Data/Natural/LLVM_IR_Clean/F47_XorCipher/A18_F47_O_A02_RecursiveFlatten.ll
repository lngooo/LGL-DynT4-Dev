define dso_local void @XorCipher(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i32
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  store i32 0, i32* %5
  br label %8
8:
  %9 = load i8*, i8** %4
  %10 = load i32, i32* %5
  %11 = sext i32 %10 to i64
  %12 = getelementptr inbounds i8, i8* %9, i64 %11
  %13 = load i8, i8* %12
  %14 = icmp ne i8 %13, 0
  br i1 %14, label %15, label %18
15:
  %16 = load i32, i32* %5
  %17 = add nsw i32 %16, 1
  store i32 %17, i32* %5
  br label %8
18:
  %19 = load i32, i32* %5
  %20 = icmp eq i32 %19, 0
  br i1 %20, label %21, label %22
21:
  store i32 1, i32* %6
  br label %26
22:
  %23 = load i8*, i8** %3
  %24 = load i8*, i8** %4
  %25 = load i32, i32* %5
  call void @_xor_rec(i8* %23, i8* %24, i32 %25, i32 0)
  store i32 0, i32* %6
  br label %26
26:
  %28 = load i32, i32* %6
  switch i32 %28, label %30 [
    i32 0, label %29
    i32 1, label %29
  ]
29:
  ret void
30:
  unreachable
}
define internal void @_xor_rec(i8* %0, i8* %1, i32 %2, i32 %3) {
  %5 = alloca i8*
  %6 = alloca i8*
  %7 = alloca i32
  %8 = alloca i32
  store i8* %0, i8** %5
  store i8* %1, i8** %6
  store i32 %2, i32* %7
  store i32 %3, i32* %8
  %9 = load i8*, i8** %5
  %10 = load i32, i32* %8
  %11 = sext i32 %10 to i64
  %12 = getelementptr inbounds i8, i8* %9, i64 %11
  %13 = load i8, i8* %12
  %14 = sext i8 %13 to i32
  %15 = icmp eq i32 %14, 0
  br i1 %15, label %16, label %17
16:
  br label %39
17:
  %18 = load i8*, i8** %6
  %19 = load i32, i32* %8
  %20 = load i32, i32* %7
  %21 = srem i32 %19, %20
  %22 = sext i32 %21 to i64
  %23 = getelementptr inbounds i8, i8* %18, i64 %22
  %24 = load i8, i8* %23
  %25 = sext i8 %24 to i32
  %26 = load i8*, i8** %5
  %27 = load i32, i32* %8
  %28 = sext i32 %27 to i64
  %29 = getelementptr inbounds i8, i8* %26, i64 %28
  %30 = load i8, i8* %29
  %31 = sext i8 %30 to i32
  %32 = xor i32 %31, %25
  %33 = trunc i32 %32 to i8
  store i8 %33, i8* %29
  %34 = load i8*, i8** %5
  %35 = load i8*, i8** %6
  %36 = load i32, i32* %7
  %37 = load i32, i32* %8
  %38 = add nsw i32 %37, 1
  call void @_xor_rec(i8* %34, i8* %35, i32 %36, i32 %38)
  br label %39
39:
  ret void
}
