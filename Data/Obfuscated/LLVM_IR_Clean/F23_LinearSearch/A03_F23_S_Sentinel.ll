define dso_local i32 @RUB(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i32* %0, i32** %5
  store i32 %1, i32* %6
  store i32 %2, i32* %7
  %10 = load i32, i32* %6
  %11 = icmp sle i32 %10, 0
  br i1 %11, label %12, label %13
12:
  store i32 -1, i32* %4
  br label %61
13:
  %15 = load i32*, i32** %5
  %16 = load i32, i32* %6
  %17 = sub nsw i32 %16, 1
  %18 = sext i32 %17 to i64
  %19 = getelementptr inbounds i32, i32* %15, i64 %18
  %20 = load i32, i32* %19
  store i32 %20, i32* %8
  %21 = load i32, i32* %7
  %22 = load i32*, i32** %5
  %23 = load i32, i32* %6
  %24 = sub nsw i32 %23, 1
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i32, i32* %22, i64 %25
  store i32 %21, i32* %26
  store i32 0, i32* %9
  br label %28
28:
  %29 = load i32*, i32** %5
  %30 = load i32, i32* %9
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i32, i32* %29, i64 %31
  %33 = load i32, i32* %32
  %34 = load i32, i32* %7
  %35 = icmp ne i32 %33, %34
  br i1 %35, label %36, label %39
36:
  %37 = load i32, i32* %9
  %38 = add nsw i32 %37, 1
  store i32 %38, i32* %9
  br label %28
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
  %49 = icmp slt i32 %46, %48
  br i1 %49, label %54, label %50
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
  br label %61
61:
  %62 = load i32, i32* %4
  ret i32 %62
}
