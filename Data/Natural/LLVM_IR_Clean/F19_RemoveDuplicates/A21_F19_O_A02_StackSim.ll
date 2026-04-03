define dso_local i32 @RemoveDuplicates(i32* %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  %11 = load i32, i32* %5
  %12 = icmp sle i32 %11, 0
  br i1 %12, label %13, label %14
13:
  store i32 0, i32* %3
  br label %63
14:
  %16 = load i32*, i32** %4
  %17 = load i32, i32* %5
  %18 = sub nsw i32 %17, 1
  %19 = call i32 @RemoveDuplicates(i32* %16, i32 %18)
  store i32 %19, i32* %6
  %21 = load i32*, i32** %4
  %22 = load i32, i32* %5
  %23 = sub nsw i32 %22, 1
  %24 = sext i32 %23 to i64
  %25 = getelementptr inbounds i32, i32* %21, i64 %24
  %26 = load i32, i32* %25
  store i32 %26, i32* %7
  store i32 0, i32* %8
  store i32 0, i32* %9
  br label %29
29:
  %30 = load i32, i32* %9
  %31 = load i32, i32* %6
  %32 = icmp slt i32 %30, %31
  br i1 %32, label %33, label %45
33:
  %34 = load i32*, i32** %4
  %35 = load i32, i32* %9
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i32, i32* %34, i64 %36
  %38 = load i32, i32* %37
  %39 = load i32, i32* %7
  %40 = icmp eq i32 %38, %39
  br i1 %40, label %41, label %42
41:
  store i32 1, i32* %8
  br label %45
42:
  %43 = load i32, i32* %9
  %44 = add nsw i32 %43, 1
  store i32 %44, i32* %9
  br label %29
45:
  %46 = load i32, i32* %8
  %47 = icmp ne i32 %46, 0
  br i1 %47, label %56, label %48
48:
  %49 = load i32, i32* %7
  %50 = load i32*, i32** %4
  %51 = load i32, i32* %6
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i32, i32* %50, i64 %52
  store i32 %49, i32* %53
  %54 = load i32, i32* %6
  %55 = add nsw i32 %54, 1
  store i32 %55, i32* %3
  store i32 1, i32* %10
  br label %58
56:
  %57 = load i32, i32* %6
  store i32 %57, i32* %3
  store i32 1, i32* %10
  br label %58
58:
  br label %63
63:
  %64 = load i32, i32* %3
  ret i32 %64
}
