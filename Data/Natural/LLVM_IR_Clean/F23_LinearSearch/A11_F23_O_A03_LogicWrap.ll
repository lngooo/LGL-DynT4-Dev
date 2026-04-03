define dso_local i32 @LinearSearch(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  store i32* %0, i32** %5
  store i32 %1, i32* %6
  store i32 %2, i32* %7
  %11 = load i32, i32* %6
  %12 = icmp sle i32 %11, 0
  br i1 %12, label %13, label %14
13:
  store i32 -1, i32* %4
  br label %64
14:
  %16 = load i32*, i32** %5
  %17 = load i32, i32* %6
  %18 = sub nsw i32 %17, 1
  %19 = sext i32 %18 to i64
  %20 = getelementptr inbounds i32, i32* %16, i64 %19
  %21 = load i32, i32* %20
  store i32 %21, i32* %8
  store i32 -1, i32* %9
  %23 = load i32, i32* %7
  %24 = load i32*, i32** %5
  %25 = load i32, i32* %6
  %26 = sub nsw i32 %25, 1
  %27 = sext i32 %26 to i64
  %28 = getelementptr inbounds i32, i32* %24, i64 %27
  store i32 %23, i32* %28
  br label %29
29:
  %30 = load i32*, i32** %5
  %31 = load i32, i32* %9
  %32 = add nsw i32 %31, 1
  store i32 %32, i32* %9
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i32, i32* %30, i64 %33
  %35 = load i32, i32* %34
  %36 = load i32, i32* %7
  %37 = icmp ne i32 %35, %36
  br i1 %37, label %38, label %39
38:
  br label %29
39:
  %40 = load i32, i32* %8
  %41 = load i32*, i32** %5
  %42 = load i32, i32* %6
  %43 = sub nsw i32 %42, 1
  %44 = sext i32 %43 to i64
  %45 = getelementptr inbounds i32, i32* %41, i64 %44
  store i32 %40, i32* %45
  %46 = load i32, i32* %9
  %47 = load i32, i32* %6
  %48 = sub nsw i32 %47, 1
  %49 = icmp eq i32 %46, %48
  br i1 %49, label %50, label %59
50:
  %51 = load i32, i32* %8
  %52 = load i32, i32* %7
  %53 = icmp eq i32 %51, %52
  br i1 %53, label %54, label %56
54:
  %55 = load i32, i32* %9
  br label %57
56:
  br label %57
57:
  %58 = phi i32 [ %55, %54 ], [ -1, %56 ]
  store i32 %58, i32* %4
  store i32 1, i32* %10
  br label %61
59:
  %60 = load i32, i32* %9
  store i32 %60, i32* %4
  store i32 1, i32* %10
  br label %61
61:
  br label %64
64:
  %65 = load i32, i32* %4
  ret i32 %65
}
