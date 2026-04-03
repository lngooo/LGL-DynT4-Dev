define dso_local i32 @PgZM7(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  store i32 0, i32* %6
  br label %9
9:
  %10 = load i32, i32* %6
  %11 = load i32, i32* %4
  %12 = sub nsw i32 %11, 4
  %13 = icmp sle i32 %10, %12
  br i1 %13, label %14, label %46
14:
  %15 = load i32*, i32** %3
  %16 = load i32, i32* %6
  %17 = sext i32 %16 to i64
  %18 = getelementptr inbounds i32, i32* %15, i64 %17
  %19 = load i32, i32* %18
  %20 = load i32*, i32** %3
  %21 = load i32, i32* %6
  %22 = add nsw i32 %21, 1
  %23 = sext i32 %22 to i64
  %24 = getelementptr inbounds i32, i32* %20, i64 %23
  %25 = load i32, i32* %24
  %26 = add nsw i32 %19, %25
  %27 = load i32*, i32** %3
  %28 = load i32, i32* %6
  %29 = add nsw i32 %28, 2
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i32, i32* %27, i64 %30
  %32 = load i32, i32* %31
  %33 = add nsw i32 %26, %32
  %34 = load i32*, i32** %3
  %35 = load i32, i32* %6
  %36 = add nsw i32 %35, 3
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i32, i32* %34, i64 %37
  %39 = load i32, i32* %38
  %40 = add nsw i32 %33, %39
  %41 = load i32, i32* %5
  %42 = add nsw i32 %41, %40
  store i32 %42, i32* %5
  br label %43
43:
  %44 = load i32, i32* %6
  %45 = add nsw i32 %44, 4
  store i32 %45, i32* %6
  br label %9
46:
  br label %47
47:
  %48 = load i32, i32* %6
  %49 = load i32, i32* %4
  %50 = icmp slt i32 %48, %49
  br i1 %50, label %51, label %62
51:
  %52 = load i32*, i32** %3
  %53 = load i32, i32* %6
  %54 = sext i32 %53 to i64
  %55 = getelementptr inbounds i32, i32* %52, i64 %54
  %56 = load i32, i32* %55
  %57 = load i32, i32* %5
  %58 = add nsw i32 %57, %56
  store i32 %58, i32* %5
  br label %59
59:
  %60 = load i32, i32* %6
  %61 = add nsw i32 %60, 1
  store i32 %61, i32* %6
  br label %47
62:
  %63 = load i32, i32* %5
  ret i32 %63
}
