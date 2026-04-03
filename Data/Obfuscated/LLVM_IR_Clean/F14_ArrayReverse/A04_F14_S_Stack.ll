define dso_local void @Kh(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %8 = load i32, i32* %4
  %9 = icmp sle i32 %8, 1
  br i1 %9, label %10, label %11
10:
  br label %66
11:
  %13 = load i32, i32* %4
  %14 = sext i32 %13 to i64
  %15 = mul i64 %14, 4
  %16 = call noalias i8* @malloc(i64 %15)
  store i32* %17, i32** %5
  store i32 0, i32* %6
  br label %19
19:
  %20 = load i32, i32* %6
  %21 = load i32, i32* %4
  %22 = icmp slt i32 %20, %21
  br i1 %22, label %25, label %23
23:
  br label %38
25:
  %26 = load i32*, i32** %3
  %27 = load i32, i32* %6
  %28 = sext i32 %27 to i64
  %29 = getelementptr inbounds i32, i32* %26, i64 %28
  %30 = load i32, i32* %29
  %31 = load i32*, i32** %5
  %32 = load i32, i32* %6
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i32, i32* %31, i64 %33
  store i32 %30, i32* %34
  br label %35
35:
  %36 = load i32, i32* %6
  %37 = add nsw i32 %36, 1
  store i32 %37, i32* %6
  br label %19
38:
  store i32 0, i32* %7
  br label %40
40:
  %41 = load i32, i32* %7
  %42 = load i32, i32* %4
  %43 = icmp slt i32 %41, %42
  br i1 %43, label %46, label %44
44:
  br label %62
46:
  %47 = load i32*, i32** %5
  %48 = load i32, i32* %4
  %49 = sub nsw i32 %48, 1
  %50 = load i32, i32* %7
  %51 = sub nsw i32 %49, %50
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i32, i32* %47, i64 %52
  %54 = load i32, i32* %53
  %55 = load i32*, i32** %3
  %56 = load i32, i32* %7
  %57 = sext i32 %56 to i64
  %58 = getelementptr inbounds i32, i32* %55, i64 %57
  store i32 %54, i32* %58
  br label %59
59:
  %60 = load i32, i32* %7
  %61 = add nsw i32 %60, 1
  store i32 %61, i32* %7
  br label %40
62:
  %63 = load i32*, i32** %5
  call void @free(i8* %64)
  br label %66
66:
  ret void
}
declare noalias i8* @malloc(i64)
declare void @free(i8*)
