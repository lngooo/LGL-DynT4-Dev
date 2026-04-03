define dso_local void @CaesarCipher(i8* %0, i32 %1) {
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca i8*
  %6 = alloca i32
  store i8* %0, i8** %3
  store i32 %1, i32* %4
  %8 = load i8*, i8** %3
  store i8* %8, i8** %5
  %10 = load i32, i32* %4
  %11 = srem i32 %10, 26
  %12 = add nsw i32 %11, 26
  %13 = srem i32 %12, 26
  store i32 %13, i32* %6
  br label %14
14:
  br label %15
15:
  %16 = load i8*, i8** %5
  %17 = load i8, i8* %16
  %18 = sext i8 %17 to i32
  %19 = icmp eq i32 %18, 0
  br i1 %19, label %20, label %21
20:
  br label %67
21:
  %22 = load i8*, i8** %5
  %23 = load i8, i8* %22
  %24 = sext i8 %23 to i32
  %25 = icmp sge i32 %24, 65
  br i1 %25, label %26, label %42
26:
  %27 = load i8*, i8** %5
  %28 = load i8, i8* %27
  %29 = sext i8 %28 to i32
  %30 = icmp sle i32 %29, 90
  br i1 %30, label %31, label %42
31:
  %32 = load i8*, i8** %5
  %33 = load i8, i8* %32
  %34 = sext i8 %33 to i32
  %35 = sub nsw i32 %34, 65
  %36 = load i32, i32* %6
  %37 = add nsw i32 %35, %36
  %38 = srem i32 %37, 26
  %39 = add nsw i32 %38, 65
  %40 = trunc i32 %39 to i8
  %41 = load i8*, i8** %5
  store i8 %40, i8* %41
  br label %64
42:
  %43 = load i8*, i8** %5
  %44 = load i8, i8* %43
  %45 = sext i8 %44 to i32
  %46 = icmp sge i32 %45, 97
  br i1 %46, label %47, label %63
47:
  %48 = load i8*, i8** %5
  %49 = load i8, i8* %48
  %50 = sext i8 %49 to i32
  %51 = icmp sle i32 %50, 122
  br i1 %51, label %52, label %63
52:
  %53 = load i8*, i8** %5
  %54 = load i8, i8* %53
  %55 = sext i8 %54 to i32
  %56 = sub nsw i32 %55, 97
  %57 = load i32, i32* %6
  %58 = add nsw i32 %56, %57
  %59 = srem i32 %58, 26
  %60 = add nsw i32 %59, 97
  %61 = trunc i32 %60 to i8
  %62 = load i8*, i8** %5
  store i8 %61, i8* %62
  br label %63
63:
  br label %64
64:
  %65 = load i8*, i8** %5
  %66 = getelementptr inbounds i8, i8* %65, i32 1
  store i8* %66, i8** %5
  br label %14
67:
  ret void
}
