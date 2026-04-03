define dso_local void @bl(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  store i32 0, i32* %6
  %15 = load i32, i32* %4
  %16 = sub nsw i32 %15, 1
  store i32 %16, i32* %7
  store i32 0, i32* %8
  br label %18
18:
  %19 = load i32, i32* %5
  %20 = load i32, i32* %6
  %21 = add nsw i32 %19, %20
  %22 = load i32, i32* %7
  %23 = load i32, i32* %8
  %24 = add nsw i32 %22, %23
  %25 = icmp slt i32 %21, %24
  br i1 %25, label %26, label %62
26:
  %28 = load i32, i32* %5
  %29 = load i32, i32* %6
  %30 = add nsw i32 %28, %29
  store i32 %30, i32* %9
  %32 = load i32, i32* %7
  %33 = load i32, i32* %8
  %34 = add nsw i32 %32, %33
  store i32 %34, i32* %10
  %36 = load i32*, i32** %3
  %37 = load i32, i32* %9
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i32, i32* %36, i64 %38
  %40 = load i32, i32* %39
  store i32 %40, i32* %11
  %41 = load i32*, i32** %3
  %42 = load i32, i32* %10
  %43 = sext i32 %42 to i64
  %44 = getelementptr inbounds i32, i32* %41, i64 %43
  %45 = load i32, i32* %44
  %46 = load i32*, i32** %3
  %47 = load i32, i32* %9
  %48 = sext i32 %47 to i64
  %49 = getelementptr inbounds i32, i32* %46, i64 %48
  store i32 %45, i32* %49
  %50 = load i32, i32* %11
  %51 = load i32*, i32** %3
  %52 = load i32, i32* %10
  %53 = sext i32 %52 to i64
  %54 = getelementptr inbounds i32, i32* %51, i64 %53
  store i32 %50, i32* %54
  %55 = load i32, i32* %6
  %56 = add nsw i32 %55, 1
  store i32 %56, i32* %6
  %57 = load i32, i32* %8
  %58 = add nsw i32 %57, -1
  store i32 %58, i32* %8
  br label %18
62:
  ret void
}
