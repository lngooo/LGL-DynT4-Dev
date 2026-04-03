define dso_local void @i3(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i32
  %7 = alloca i32
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  %9 = load i8*, i8** %3
  store i8* %9, i8** %5
  br label %10
10:
  %11 = load i8*, i8** %5
  %12 = load i8, i8* %11
  %13 = sext i8 %12 to i32
  %14 = icmp ne i32 %13, 0
  br i1 %14, label %17, label %15
15:
  br label %55
17:
  %19 = load i8*, i8** %5
  %20 = load i8*, i8** %3
  %21 = ptrtoint i8* %19 to i64
  %22 = ptrtoint i8* %20 to i64
  %23 = sub i64 %21, %22
  %24 = trunc i64 %23 to i32
  store i32 %24, i32* %6
  store i32 0, i32* %7
  br label %26
26:
  %27 = load i8*, i8** %4
  %28 = load i32, i32* %7
  %29 = sext i32 %28 to i64
  %30 = getelementptr inbounds i8, i8* %27, i64 %29
  %31 = load i8, i8* %30
  %32 = icmp ne i8 %31, 0
  br i1 %32, label %33, label %36
33:
  %34 = load i32, i32* %7
  %35 = add nsw i32 %34, 1
  store i32 %35, i32* %7
  br label %26
36:
  %37 = load i8*, i8** %4
  %38 = load i32, i32* %6
  %39 = load i32, i32* %7
  %40 = srem i32 %38, %39
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds i8, i8* %37, i64 %41
  %43 = load i8, i8* %42
  %44 = sext i8 %43 to i32
  %45 = load i8*, i8** %5
  %46 = load i8, i8* %45
  %47 = sext i8 %46 to i32
  %48 = xor i32 %47, %44
  %49 = trunc i32 %48 to i8
  store i8 %49, i8* %45
  br label %52
52:
  %53 = load i8*, i8** %5
  %54 = getelementptr inbounds i8, i8* %53, i32 1
  store i8* %54, i8** %5
  br label %10
55:
  ret void
}
