define dso_local void @yt(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i8
  %5 = alloca i8
  store i8* %0, i8** %2
  store i32 0, i32* %3
  br label %7
7:
  %8 = load i8*, i8** %2
  %9 = load i32, i32* %3
  %10 = sext i32 %9 to i64
  %11 = getelementptr inbounds i8, i8* %8, i64 %10
  %12 = load i8, i8* %11
  %13 = icmp ne i8 %12, 0
  br i1 %13, label %16, label %14
14:
  br label %46
16:
  %17 = load i8*, i8** %2
  %18 = load i32, i32* %3
  %19 = sext i32 %18 to i64
  %20 = getelementptr inbounds i8, i8* %17, i64 %19
  %21 = load i8, i8* %20
  store i8 %21, i8* %4
  %22 = load i8, i8* %4
  %23 = zext i8 %22 to i32
  %24 = or i32 %23, 32
  %25 = trunc i32 %24 to i8
  store i8 %25, i8* %5
  %26 = load i8, i8* %5
  %27 = zext i8 %26 to i32
  %28 = icmp sge i32 %27, 97
  br i1 %28, label %29, label %42
29:
  %30 = load i8, i8* %5
  %31 = zext i8 %30 to i32
  %32 = icmp sle i32 %31, 122
  br i1 %32, label %33, label %42
33:
  %34 = load i8, i8* %4
  %35 = zext i8 %34 to i32
  %36 = xor i32 %35, 32
  %37 = trunc i32 %36 to i8
  %38 = load i8*, i8** %2
  %39 = load i32, i32* %3
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i8, i8* %38, i64 %40
  store i8 %37, i8* %41
  br label %42
42:
  br label %43
43:
  %44 = load i32, i32* %3
  %45 = add nsw i32 %44, 1
  store i32 %45, i32* %3
  br label %7
46:
  ret void
}
