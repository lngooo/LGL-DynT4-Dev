define dso_local void @CaesarCipher(i8* %0, i32 %1) {
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca i32
  store i8* %0, i8** %3
  store i32 %1, i32* %4
  %6 = load i8*, i8** %3
  %7 = load i8, i8* %6
  %8 = sext i8 %7 to i32
  %9 = icmp eq i32 %8, 0
  br i1 %9, label %10, label %11
10:
  br label %64
11:
  %13 = load i32, i32* %4
  %14 = srem i32 %13, 26
  %15 = add nsw i32 %14, 26
  %16 = srem i32 %15, 26
  store i32 %16, i32* %5
  %17 = load i8*, i8** %3
  %18 = load i8, i8* %17
  %19 = sext i8 %18 to i32
  %20 = icmp sge i32 %19, 65
  br i1 %20, label %21, label %37
21:
  %22 = load i8*, i8** %3
  %23 = load i8, i8* %22
  %24 = sext i8 %23 to i32
  %25 = icmp sle i32 %24, 90
  br i1 %25, label %26, label %37
26:
  %27 = load i8*, i8** %3
  %28 = load i8, i8* %27
  %29 = sext i8 %28 to i32
  %30 = sub nsw i32 %29, 65
  %31 = load i32, i32* %5
  %32 = add nsw i32 %30, %31
  %33 = srem i32 %32, 26
  %34 = add nsw i32 %33, 65
  %35 = trunc i32 %34 to i8
  %36 = load i8*, i8** %3
  store i8 %35, i8* %36
  br label %59
37:
  %38 = load i8*, i8** %3
  %39 = load i8, i8* %38
  %40 = sext i8 %39 to i32
  %41 = icmp sge i32 %40, 97
  br i1 %41, label %42, label %58
42:
  %43 = load i8*, i8** %3
  %44 = load i8, i8* %43
  %45 = sext i8 %44 to i32
  %46 = icmp sle i32 %45, 122
  br i1 %46, label %47, label %58
47:
  %48 = load i8*, i8** %3
  %49 = load i8, i8* %48
  %50 = sext i8 %49 to i32
  %51 = sub nsw i32 %50, 97
  %52 = load i32, i32* %5
  %53 = add nsw i32 %51, %52
  %54 = srem i32 %53, 26
  %55 = add nsw i32 %54, 97
  %56 = trunc i32 %55 to i8
  %57 = load i8*, i8** %3
  store i8 %56, i8* %57
  br label %58
58:
  br label %59
59:
  %60 = load i8*, i8** %3
  %61 = getelementptr inbounds i8, i8* %60, i64 1
  %62 = load i32, i32* %4
  call void @CaesarCipher(i8* %61, i32 %62)
  br label %64
64:
  ret void
}
