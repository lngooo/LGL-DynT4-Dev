define dso_local void @fE(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i32
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  store i32 0, i32* %5
  store i32 0, i32* %6
  br label %9
9:
  %10 = load i8*, i8** %4
  %11 = load i32, i32* %6
  %12 = sext i32 %11 to i64
  %13 = getelementptr inbounds i8, i8* %10, i64 %12
  %14 = load i8, i8* %13
  %15 = icmp ne i8 %14, 0
  br i1 %15, label %16, label %19
16:
  %17 = load i32, i32* %6
  %18 = add nsw i32 %17, 1
  store i32 %18, i32* %6
  br label %9
19:
  br label %20
20:
  %21 = load i8*, i8** %3
  %22 = load i32, i32* %5
  %23 = sext i32 %22 to i64
  %24 = getelementptr inbounds i8, i8* %21, i64 %23
  %25 = load i8, i8* %24
  %26 = sext i8 %25 to i32
  %27 = icmp eq i32 %26, 0
  br i1 %27, label %28, label %29
28:
  br label %52
29:
  %30 = load i8*, i8** %3
  %31 = load i32, i32* %5
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i8, i8* %30, i64 %32
  %34 = load i8, i8* %33
  %35 = sext i8 %34 to i32
  %36 = load i8*, i8** %4
  %37 = load i32, i32* %5
  %38 = load i32, i32* %6
  %39 = srem i32 %37, %38
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i8, i8* %36, i64 %40
  %42 = load i8, i8* %41
  %43 = sext i8 %42 to i32
  %44 = xor i32 %35, %43
  %45 = trunc i32 %44 to i8
  %46 = load i8*, i8** %3
  %47 = load i32, i32* %5
  %48 = sext i32 %47 to i64
  %49 = getelementptr inbounds i8, i8* %46, i64 %48
  store i8 %45, i8* %49
  %50 = load i32, i32* %5
  %51 = add nsw i32 %50, 1
  store i32 %51, i32* %5
  br label %20
52:
  ret void
}
